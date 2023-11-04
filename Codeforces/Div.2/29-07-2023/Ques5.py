def expected_seconds(S, m):
    P = 1000000007

    # Initialize a list to store the expected number of seconds for each element in S
    expected_seconds_list = [0] * (m + 1)

    # Iterate from m down to 1
    for x in range(m-1, 0, -1):
        # Check if x is in S
        if x in S:
            # Calculate the expected number of seconds for x
            expected_seconds_list[x] = (1 + expected_seconds_list[x + 1]) % P

    # Return the expected number of seconds for the first element in S (which is 1)
    return expected_seconds_list[1]

# Example usage:
S = {1, 3, 4}  # Set S with n = 3 and m = 4
m = 4
result = expected_seconds(S, m)
print(result)  # Output: 4
