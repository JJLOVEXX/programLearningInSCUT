package com.company;

import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        String str = input.next();
        int begin = 0;
        int end = str.length() - 1;
        boolean isPalindrome = true;
        while (begin < end) {
            if (str.charAt(begin) != str.charAt(end)) {
                isPalindrome = false;
                break;
            }
            begin++;
            end--;
        }
        if (isPalindrome) {
            System.out.println("TRUE");
        } else {
            System.out.println("FALSE");
        }
        // write your code here
    }
}
