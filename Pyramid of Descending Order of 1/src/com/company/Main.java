package com.company;

import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        System.out.print("请输入1-15之间的数:");
        int number = input.nextInt();
        for (int a = 0; a < number; a++) {             //第一个for循环控制循环次数（显示几行）
            for (int d = number - a - 1; d > 0; d--)
                System.out.print("  ");  //这里的第二个for循环是让数字居中显示
            for (int b = a + 1; b > 0; b--) {        //第三个for循环从大到小
                System.out.print(b + " ");
                if (b == 1) {
                    for (int c = b + 1; c < a + 2; c++) {    //这里的循环数字从小到大
                        System.out.print(c + " ");
                    }
                }

            }
            System.out.println("");
        }
        // write your code here
    }
}
