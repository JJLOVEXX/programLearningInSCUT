import java.util.Scanner;

public class Main {
    public static String format(int number, int width) {
        String string=String.format("%0"+width+"d",number);
        return string;
    }

    public static void main(String[] args) {
        String number=format(10000,4);
        System.out.println(number);
    }
}
