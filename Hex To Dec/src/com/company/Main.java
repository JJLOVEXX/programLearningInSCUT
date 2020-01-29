package com.company;

import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        Scanner input=new Scanner(System.in);
        String hex=input.nextLine();
        hexToDec(hex);
	// write your code here
    }
    static public void hexToDec(String h){
        int dec=0;
        for(int i=0;i<h.length();i++)
        {
            char hexChar=h.charAt(i);
            dec=dec*16+hexCharToDec(hexChar);
        }
        System.out.println(dec);
    }
    static public int hexCharToDec(char ch){
        if(ch>='A'&&ch<='F')
        {
            return 10+ch-'A';
        }
        else
        {
            return ch-'0';
        }
    }
}
