import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        System.out.println("Please input an integer between 0 and 1000: ");
        Scanner input = new Scanner(System.in);
        int integer = input.nextInt();
        int sum = 0;
        while (integer != 0) {
            sum+=integer%10;
            integer/=10;
        }
        System.out.println(sum);
    }
}
