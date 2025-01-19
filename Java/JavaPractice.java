package Java;

import java.util.ArrayList;
import java.util.Collections;
import java.util.Comparator;
import java.util.List;

public class JavaPractice {

    private void sortListOfStringByLength() {
        List<String> list = new ArrayList<>();
        list.add("Kulkarani");
        list.add("Golu");
        list.add("Ashwani");
        list.add("Mohit");

        System.out.println(list);

        Comparator<String> comparator = new Comparator<String>() {
            public int compare(String s1, String s2) {
                if (s1.length() > s2.length())
                    return 1;
                else
                    return -1;
            }
        };

        Collections.sort(list, comparator);

        System.out.println(list);
    }

    public static void main(String[] args) {

        JavaPractice obj = new JavaPractice();

        // Sort the List of String based on the length of String.
        obj.sortListOfStringByLength();

    }

}
