import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        Scanner input=new Scanner(System.in);
        String str=input.nextLine();
        int code=10-(str.charAt(0)+3*str.charAt(1)+str.charAt(2)
                +3*str.charAt(3)+str.charAt(4)+3*str.charAt(5)+
                str.charAt(6)+3*str.charAt(7)+str.charAt(8)+
                3*str.charAt(9)+str.charAt(10)+3*str.charAt(11))%10;
        if (code==10){
            for (int i=0;i<12;i++){
                System.out.print(str.charAt(i));
            }
            System.out.println(0);
        }
        else{
            for (int i=0;i<12;i++){
                System.out.print(str.charAt(i));
            }
            System.out.println(code);
        }
    }
}
