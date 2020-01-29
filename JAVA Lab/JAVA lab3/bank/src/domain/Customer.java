package domain;

import java.util.ArrayList;

//Modify the Customer class to implement the Comparable interface.
public class Customer implements Comparable<Customer> {
    private String firstName;
    private String lastName;
    private Account account;

    ArrayList<Account> accountList = new ArrayList();

    public Account getAccount(int n) {
        return accountList.get(n);
    }

    public int getNumOfAccounts() {
        return accountList.size();
    }

    public Customer(String f, String l) {
        firstName = f;
        lastName = l;
    }

    public String getFirstName() {
        return firstName;
    }

    public String getLastName() {
        return lastName;
    }

    public Account getAccount() {
        return account;
    }

    public void setAccount(Account acct) {
        account = acct;
    }

    public void addAccount(Account account2) {
        accountList.add(account2);// TODO Auto-generated method stub
    }

    // Make this method compare the two customers in a lexi graphical order
    // with the last name taking precedence over the first name.
    @Override
    public int compareTo(Customer o) {
        if (getLastName().compareTo(o.getLastName()) > 0) {
            return 1;
        } else if (getLastName().compareTo(o.getLastName()) < 0) {
            return -1;
        } else if (getLastName().compareTo(o.getLastName()) == 0) {
            if (getFirstName().compareTo(o.getFirstName()) > 0) {
                return 1;
            } else {
                return -1;
            }
        }
        return 0;
    }
}