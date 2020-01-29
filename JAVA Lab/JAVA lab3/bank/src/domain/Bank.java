package domain;

import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;
import java.util.List;

public class Bank
{
    private Customer[] customers;
    private int numOfCustomers;

    //Modify the Bank class to create a public static method, called getBank, that returns an instance of the Bank class.
    private static Bank bank=new Bank();

    //The single instance should be a static attribute and should be private. Likewise, make the Bank constructor private.
    private Bank(){
        customers = new Customer[10];
    }

    //Add the sortCustomers method to the Bank class.
    public void sortCustomers(){
        List<Customer> list=new ArrayList<Customer>();
        for(int i=0;i<numOfCustomers;i++){
            list.add(customers[i]);
        }
        Collections.sort(list);
        for(int j=0;j<list.size();j++){
            customers[j]=list.get(j);
        }
        /*for(int i=0;i<numOfCustomers;i++){
            System.out.println(customers[i].getFirstName()+" "+customers[i].getLastName());
        }*/
    }

    //Add the searchCustomers method to the Bank class.
    public void searchCustomers(String f,String l){
        for(int i=0;i<numOfCustomers;i++){
            if(f==customers[i].getFirstName()&&l==customers[i].getLastName()){
                System.out.println(getCustomer(i).getFirstName()+" "+getCustomer(i).getLastName()
                        +" "+"Account amount: "+getCustomer(i).getNumOfAccounts());
                for(int j=0;j<getCustomer(i).accountList.size();j++){
                    System.out.println("current balance is: "+getCustomer(i).getAccount(j).getBalance()+"\n");
                }
            }
        }
    }

    public void addCustomer(String f,String l)
    {
        Customer c= new Customer(f,l);
        customers[numOfCustomers++]= c;
    }

    public int getNumOfCustomers()
    {
        return numOfCustomers;
    }

    public Customer getCustomer(int index)
    {
        if (index < numOfCustomers)
        {
            return customers[index];
        }
        else
        {
            return null;
        }

    }

    public static Bank getBank() {
        // TODO Auto-generated method stub
        return bank;
    }

}
