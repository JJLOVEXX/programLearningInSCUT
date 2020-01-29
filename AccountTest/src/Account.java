import java.util.ArrayList;
import java.util.Date;

public class Account {
    private int id = 0;
    private double balance = 0;
    private double annualInterestRate = 0;
    private Date dateCreate;
    private String name;

    Account() {

    }

    Account(int id, double balance) {
        setId(id);
        setBalance(balance);
        getDateCreate();
    }

    ArrayList<Transaction> transactions = new ArrayList<>();

    Account(int id, double balance, String name) {
        setId(id);
        setBalance(balance);
        setName(name);
        getDateCreate();
    }

    public void setName(String name) {
        this.name = name;
    }

    public String getName() {
        return name;
    }

    public void setId(int id) {
        this.id = id;
    }

    public void setBalance(double balance) {
        this.balance = balance;
    }

    public void setAnnualInterestRate(double annualIntrestRate) {
        this.annualInterestRate = annualIntrestRate;
    }

    public int getId() {
        return id;
    }

    public Date getDateCreate() {
        dateCreate = new Date();
        return dateCreate;
    }

    public double getMonthlyInterestRate() {
        return annualInterestRate / 12;
    }

    public double getBalance() {
        return balance;
    }

    public void withdraw(double money) {
        balance-=money;
        transactions.add(new Transaction('w', money, "withdraw"));
    }

    public void deposit(double money) {
        balance+=money;
        transactions.add(new Transaction('d', money, "deposit"));
    }

    public void print(){
        for(int i=0;i<transactions.size();i++)
        {
            System.out.println(transactions.get(i));
        }
    }
    @Override
    public String toString() {
        return getId() + "\n" + getName() + "\n" + getBalance() + "\n" + getMonthlyInterestRate() + "\n" + getDateCreate() + "\n";
    }
}
