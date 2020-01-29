public class Main {

    public static void main(String[] args) {
        Account account=new Account(1122,1000,"George");
        account.setAnnualInterestRate(1.5);
        account.deposit(30);
        System.out.println(account.toString());
        account.deposit(40);
        System.out.println(account.toString());
        account.deposit(50);
        System.out.println(account.toString());
        account.print();
        account.withdraw(5);
        System.out.println(account.toString());
        account.withdraw(4);
        System.out.println(account.toString());
        account.withdraw(2);
        System.out.println(account.toString());
        account.print();
    }
}
