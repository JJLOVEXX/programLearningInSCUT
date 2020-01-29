import java.util.Scanner;

public class ATM {

    private static Account myAccount;

    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        String ID = input.nextLine();
        double balance = input.nextDouble();
        myAccount = new Account(ID,balance);
        Menu myMenu=new Menu(myAccount);
        myMenu.display(myAccount);
    }
}
