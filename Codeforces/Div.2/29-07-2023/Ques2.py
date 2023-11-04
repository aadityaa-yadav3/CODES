def find_max_interval_size():
    n = int(input())
    prev_divisor = -1
    count_intervals = 1

    for i in range(1, 1025):
        if n % i == 0:
            if prev_divisor != -1:
                if i - prev_divisor != 1:
                    break
                count_intervals += 1
            prev_divisor = i

    return count_intervals

num_test_cases = int(input())
for _ in range(num_test_cases):
    result = find_max_interval_size()
    print(result)
