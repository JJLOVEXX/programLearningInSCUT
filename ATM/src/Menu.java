import java.util.Scanner;

public class Menu {

    Menu(Account account) {

        showBasicMenu();
        selection(account);
    }
    public void display(Account account){
        System.out.println(account.getId());
        System.out.println(account.getBalance());
    }
    public static void showBasicMenu() {
        String[] list = {"-check", "-deposit", "-withdraw","-exit"};

        for (int i = 0; i < list.length; i++) {
            System.out.println(i + list[i]);
        }
    }

    public static void selection(Account account) {
        Scanner input = new Scanner(System.in);
        int choice=0;
        while (choice != 3) {
            choice=input.nextInt();
            switch (choice) {
                case 0:
                    account.check(account);
                    break;
                case 1:
                    double saveMoney = input.nextDouble();
                    account.deposit(account, saveMoney);
                    account.check(account);
                    break;
                case 2:
                    double withdrawMoney = input.nextDouble();
                    account.withdraw(account, withdrawMoney);
                    account.check(account);
                    break;
                default:
                    account.check(account);
                    break;
            }
        }
    }
}
