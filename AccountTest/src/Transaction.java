import java.util.Date;

public class Transaction {
    private Date transactionDate;
    private char type;
    private double transactionAmount=0;
    private double balance=0;
    private String description;

    Transaction() {

    }

    Transaction(char type, double balance, String description) {
        setType(type);
        transactionAmount++;
        setBalance(balance);
        setDescription(description);
    }

    public void setType(char type) {
        this.type = type;
    }


    public void setBalance(double balance) {
        this.balance = balance;
    }

    public void setDescription(String description) {
        this.description = description;
    }

    public Date getTransactionDate() {
        transactionDate = new Date();
        return transactionDate;
    }

    public double getBalance() {
        return balance;
    }

    public char getType() {
        return type;
    }

    public String getDescription() {
        return description;
    }

    @Override
    public String toString() {
        return getType() + "\n" + transactionAmount + "\n" + getBalance() + "\n" + getDescription() + "\n" + getTransactionDate();
    }
}
