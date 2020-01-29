package com.company;

import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        while (true) {
            String password = input.nextLine();
            if (isValid(password)) {
                System.out.println("Valid");
            } else {
                System.out.println("Invalid");
            }
        }
        // write your code here
    }

    static public boolean isValid(String str) {
        if (MoreThanEightChar(str)) {
            if (CharAndNum(str)) {
                if (MoreThanTwoNum(str)) {
                    return true;
                }
            }
        }
        return false;
    }

    static public boolean MoreThanEightChar(String t) {
        if (t.length() >= 8) {
            return true;
        } else {
            return false;
        }
    }

    static public boolean CharAndNum(String m) {
        for (int i = 0; i < m.length(); i++) {
            if (m.charAt(i) >= 'A' && m.charAt(i) <= 'Z' || m.charAt(i) >= 'a' && m.charAt(i) <= 'z' || m.charAt(i) >= '0' && m.charAt(i) <= '9') {
            } else {
                return false;
            }
        }
        return true;
    }

    static public boolean MoreThanTwoNum(String s) {
        int count = 0;
        for (int i = 0; i < s.length(); i++) {
            if (s.charAt(i) >= '0' && s.charAt(i) <= '9') {
                count++;
            }
        }
        if (count < 2) {
            return false;
        } else {
            return true;
        }
    }
}
