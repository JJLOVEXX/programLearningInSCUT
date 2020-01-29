import java.util.Scanner;

public class Main {

    public static double futureInvestmentValue
            (double investmentAmount,double monthlyInterestRate,int years){
        double future=investmentAmount*Math.pow((1+monthlyInterestRate),years*12);
        return future;
    }
    public static void main(String[] args) {
        Scanner input=new Scanner(System.in);
        System.out.println("The amount invested: ");
        double investmentValue=input.nextDouble();
        System.out.println("Annual interest rate: ");
        double rate=input.nextDouble();
        final int year=30;
        System.out.printf("%-10s%-10s\n","Years","Future Value");
        for (int i=1;i<=year;i++){
            System.out.printf("%-10d%10.2f\n",i,futureInvestmentValue(investmentValue,rate/1200,i));
        }
    }
}
