import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Map;

public class Solution {

    Map<Integer, Integer> frequency = new HashMap<>();
    List<List<Integer>> permutations = new ArrayList<>();

    public List<List<Integer>> permuteUnique(int[] nums) {
        for (int n : nums) {
            frequency.put(n, frequency.getOrDefault(n, 0) + 1);
        }
        findPermutations(new ArrayList<>(), nums.length);
        return permutations;
    }

    private void findPermutations(List<Integer> current, int permutationSize) {
        if (current.size() == permutationSize) {
            permutations.add(new ArrayList<>(current));
            return;
        }

        for (int n : frequency.keySet()) {

            if (frequency.get(n) > 0) {
                frequency.put(n, frequency.get(n) - 1);
                current.add(n);

                findPermutations(current, permutationSize);

                frequency.put(n, frequency.get(n) + 1);
                current.remove(current.size() - 1);
            }
        }
    }
}