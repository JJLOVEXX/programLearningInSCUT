package com.company;

import java.util.Random;
import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        int number =(int)(Math.random()*20);
        int[] array = createArrays(number);
        int[] arr = selectionSort(array);
        displayArray(array);
        Scanner input = new Scanner(System.in);
        int x = input.nextInt();
        System.out.println(binarySearch(x, arr));
        displayArray(arr);
        // write your code here
    }

    public static void displayArray(int[] array) {
        for (int e : array) {
            System.out.print(e + "  ");
        }
        System.out.println("");
    }

    public static int[] createArrays(int num) {
        int[] my_Array = new int[num];
        for (int i = 0; i < my_Array.length - 1; i++) {
            my_Array[i] =(int)(Math.random()*50);
        }
        return my_Array;
    }

    public static int[] selectionSort(int arr[]) {
        for (int i = 0; i < arr.length - 1; i++) {
            int currentSmallestIndex = i;
            int currentSmallestNumber = arr[i];
            for (int j = i + 1; j < arr.length; j++) {
                if (currentSmallestNumber > arr[j]) {
                    currentSmallestNumber = arr[j];
                    currentSmallestIndex = j;
                }
            }
            if (currentSmallestIndex != i) {
                arr[currentSmallestIndex] = arr[i];
                arr[i] = currentSmallestNumber;
            }
        }
        return arr;
    }

    public static int binarySearch(int key, int[] array) {
        int begin = 0, end = array.length - 1;
        while (begin <= end) {
            int mid = (begin + end) / 2;
            if (key < array[mid]) {
                end = mid - 1;
            } else if (key == array[mid]) {
                System.out.println("The key number is at "+mid);
                return array[mid];
            } else {
                begin = mid + 1;
            }
        }
        return -begin - 1;
    }


}
