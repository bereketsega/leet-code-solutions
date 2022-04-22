package easy;

import java.util.Set;
import java.util.HashSet;
import java.util.List;
import java.util.ArrayList;
import java.util.Arrays;

public class _1436 {

    public static String destCity(List<List<String>> paths) {
        Set<String> dest = new HashSet<>();
        // add destination cities to set
        for (int i = 0; i < paths.size(); i++) {
            dest.add(paths.get(i).get(1));
        }
        // remove cities with paths outgoing to another city
        for (int i = 0; i < paths.size(); i++) {
            dest.remove(paths.get(i).get(0));
        }
        String[] res = dest.toArray(new String[dest.size()]);
        return res[0];
    }

    public static void main(String[] args) {
        List<List<String>> paths = new ArrayList<>();
        paths.add(Arrays.asList("London","New York"));
        paths.add(Arrays.asList("New York","Lima"));
        paths.add(Arrays.asList("Lima","Sao Paulo"));

        System.out.println(destCity(paths));

    }
}

/*
You are given the array paths, where paths[i] = [cityAi, cityBi] means there exists a direct path going from cityAi to cityBi. 
Return the destination city, that is, the city without any path outgoing to another city.

It is guaranteed that the graph of paths forms a line without any loop, therefore, there will be exactly one destination city.
*/
