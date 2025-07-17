import sys
from collections import deque
 
def solve():
    input = sys.stdin.read().split()
    ptr = 0
    t = int(input[ptr])
    ptr += 1
    for _ in range(t):
        n, k = map(int, input[ptr:ptr+2])
        ptr +=2
        h = list(map(int, input[ptr:ptr+n]))
        ptr +=n
        
        max_h = max(h)
        start = k - 1  # converting to 0-based
        
        if h[start] == max_h:
            print("YES")
            continue
        
        visited = [False] * n
        queue = deque()
        queue.append(start)
        visited[start] = True
        possible = False
        
        while queue:
            i = queue.popleft()
            for j in range(n):
                if not visited[j] and h[i] > h[j]:
                    # Check if teleporting from i to j is possible
                    # The teleport time is h[i] - h[j] (assuming h[i] > h[j])
                    teleport_time = h[i] - h[j]
                    # The water level at teleport start is (current_time + 1) ?
                    # Wait, the initial time is 0. Each teleport starts at some time x.
                    # The problem is modeled as: when you are at tower i at time t, you can teleport to j, taking |h_i - h_j| time.
                    # During the teleport, the water level rises. At time t + delta (delta is up to |h_i - h_j|), the water level is 1 + t + delta.
                    # For all delta in (0, |h_i - h_j|], 1 + t + delta must <= h_i.
                    # The worst case is delta = |h_i - h_j|: 1 + t + |h_i - h_j| <= h_i.
                    # So the condition is t + |h_i - h_j| + 1 <= h_i.
                    # But the initial time is 0 when starting at k-1.
                    # So when we start teleporting from i to j at time t, the condition is t + |h_i - h_j| < h_i.
                    # Because the water level at time t + |h_i - h_j| is 1 + (t + |h_i - h_j|), and it must be <= h_i.
                    # So 1 + t + |h_i - h_j| <= h_i => t + |h_i - h_j| < h_i.
                    # So for the BFS, each node's time is the earliest time it can be reached.
                    # So when moving from i to j, the new time is t + |h_i - h_j|.
                    # But how to track the time for each node?
                    # So perhaps we need to track the time when we arrive at each node.
                    pass
            # The above approach may need to be rethought.
            # Alternative idea: The key insight is that you can teleport from i to j if h[j] < h[i], and the time taken (h[i] - h[j]) is such that when added to the current time, the resulting time (t + (h[i] - h[j])) is such that the water level (1 + t + (h[i] - h[j])) is <= h[i].
            # So 1 + t + (h[i] - h[j]) <= h[i] => 1 + t <= h[j].
            # So h[j] >= 1 + t.
            # But what is t when you arrive at i? It's the sum of all previous teleport times.
            # So, the BFS should keep track of the current time.
            pass
        
        # Reimplementing the BFS with time tracking.
        # Initialize the queue with (position, time)
        visited = [False] * n
        queue = deque()
        queue.append((start, 0))
        visited[start] = True
        found = False
        
        while queue:
            i, current_time = queue.popleft()
            if h[i] == max_h:
                found = True
                break
            for j in range(n):
                if not visited[j]:
                    teleport_time = abs(h[i] - h[j])
                    new_time = current_time + teleport_time
                    # The water level during teleport must not exceed h[i] at any point up to new_time.
                    # The water level at new_time is 1 + new_time.
                    if 1 + new_time <= h[i]:
                        visited[j] = True
                        queue.append((j, new_time))
        print("YES" if found else "NO")
 
solve()
