package com.company;

import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        Scanner input=new Scanner(System.in);
        String str=input.nextLine();
        StringBuffer buffer=new StringBuffer(str);
        System.out.println(buffer.reverse());
	// write your code here
    }
}
