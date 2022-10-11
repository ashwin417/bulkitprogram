import java.util.*;

class split_upon_characters{
    public static List<String> split_string(String str, String reg){
        return Arrays.asList(str.split(reg))                                                     //splitting upon the regular expression
        .stream()
        .filter(x -> !Objects.equals(x, ""))                                                   //removes null elements from the list
        .toList();
    }
    public static void main(String[] args) {
        System.out.println(split_string("hel54lo w56or79*823.ld", "[a-z]"));            //reg has to be a valid regular expression
    }
}