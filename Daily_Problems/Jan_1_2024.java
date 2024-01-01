if (nums.length % 2 != 0) return false;

    // HashSet to efficiently track remainders for forming pairs
    HashSet<Integer> set = new HashSet<>();

    
    for (int num : nums) {
        // Calculate non-negative remainder when divided by 'k'
        int rem = (num % k + k) % k;

        // Complement needed for divisible sums
        int req = (k - rem) % k;

        // Manage pairs in the HashSet
        if (set.contains(req)) set.remove(req);
        else set.add(rem);
    }

    // If HashSet is empty, all pairs are found
    return set.isEmpty();
