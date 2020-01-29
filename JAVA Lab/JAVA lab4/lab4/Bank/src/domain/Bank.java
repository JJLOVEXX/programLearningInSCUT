package domain;

import DAO.CustomerDAO;
import java.io.*;
import java.util.*;

public class Bank
{
    private Customer[] customers;
    private int numOfCustomers;

    List<Customer>list;
    private int position;
    private CustomerDAO customerDAO=new CustomerDAO();

    //Modify the Bank class to create a public static method, called getBank, that returns an instance of the Bank class.
    private static Bank bank=new Bank();

    //The single instance should be a static attribute and should be private. Likewise, make the Bank constructor private.
    private Bank(){
        customers = new Customer[10];
    }

    public CustomerDAO getCustomerDAO(){
        return customerDAO;
    }
    public void readCustomer(File file,int pointer){
        customerDAO.randomRead(file,pointer);
    }

    public void writeCustomer(File file,Customer customer){
        customerDAO.randomWrite(file, customer);
    }

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

    public int getIndex(){
        return position;
    }
    public boolean searchCustomers(String f,String l){
        for(int i=0;i<numOfCustomers;i++){
            if(f==customers[i].getFirstName()&&l==customers[i].getLastName()){
               /* System.out.println(getCustomer(i).getFirstName()+" "+getCustomer(i).getLastName()
                        +" "+"Account amount: "+getCustomer(i).getNumOfAccounts());
                for(int j=0;j<getCustomer(i).accountList.size();j++){
                    System.out.println("current balance is: "+getCustomer(i).getAccount(j).getBalance()+"\n");
                }*/
               position=i;
              return true;
            }
        }
        return false;
    }


    public void addCustomer(String f,String l) {
        Customer c = new Customer(f, l);
        customers[numOfCustomers++] = c;
        list = new List<Customer>() {
            @Override
            public int size() {
                return 0;
            }

            @Override
            public boolean isEmpty() {
                return false;
            }

            @Override
            public boolean contains(Object o) {
                return false;
            }

            @Override
            public Iterator<Customer> iterator() {
                return null;
            }

            @Override
            public Object[] toArray() {
                return new Object[0];
            }

            @Override
            public <T> T[] toArray(T[] a) {
                return null;
            }

            @Override
            public boolean add(Customer customer) {
                return false;
            }

            @Override
            public boolean remove(Object o) {
                return false;
            }

            @Override
            public boolean containsAll(Collection<?> c) {
                return false;
            }

            @Override
            public boolean addAll(Collection<? extends Customer> c) {
                return false;
            }

            @Override
            public boolean addAll(int index, Collection<? extends Customer> c) {
                return false;
            }

            @Override
            public boolean removeAll(Collection<?> c) {
                return false;
            }

            @Override
            public boolean retainAll(Collection<?> c) {
                return false;
            }

            @Override
            public void clear() {

            }

            @Override
            public Customer get(int index) {
                return null;
            }

            @Override
            public Customer set(int index, Customer element) {
                return null;
            }

            @Override
            public void add(int index, Customer element) {

            }

            @Override
            public Customer remove(int index) {
                return null;
            }

            @Override
            public int indexOf(Object o) {
                return 0;
            }

            @Override
            public int lastIndexOf(Object o) {
                return 0;
            }

            @Override
            public ListIterator<Customer> listIterator() {
                return null;
            }

            @Override
            public ListIterator<Customer> listIterator(int index) {
                return null;
            }

            @Override
            public List<Customer> subList(int fromIndex, int toIndex) {
                return null;
            }
        };
    }


    public void deleteCustomer(String f,String l){
        if(searchCustomers(f,l)){
            list.remove(Bank.getBank().position);
        }
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
