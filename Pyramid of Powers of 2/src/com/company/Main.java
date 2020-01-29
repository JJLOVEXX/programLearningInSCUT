package com.company;

import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int line = input.nextInt();
        for (int i = 1; i <= line; i++) {
            int c = 0;
            for (int j = 1; j < line - i + 1; j++) {
                System.out.print("  ");
            }
            for (int k = 1, num = 1; k <= i; k++) {
                System.out.print(num + " ");
                c = num;
                num *= 2;
            }
            c /= 2;
            for (int s = i - 1; s >= 1; s--) {
                System.out.print(c + " ");
                c /= 2;
            }
            System.out.println("");
        }
        // write your code here
    }
}
