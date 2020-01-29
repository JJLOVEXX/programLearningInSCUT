public class Person {
    private String name;
    private String address;
    private String phoneNumber;
    private String EmailAddress;

    Person(){

    }
    Person(String name,String address,String phoneNumber,String EmailAddress){
        setName(name);
        setAddress(address);
        setPhoneNumber(phoneNumber);
        setEmailAddress(EmailAddress);
    }
    public void setName(String name) {
        this.name = name;
    }

    public void setAddress(String address) {
        this.address = address;
    }

    public void setPhoneNumber(String phoneNumber) {
        this.phoneNumber = phoneNumber;
    }

    public void setEmailAddress(String emailAddress) {
        EmailAddress = emailAddress;
    }

    public String getName() {
        return name;
    }

    public String getAddress() {
        return address;
    }

    public String getEmailAddress() {
        return EmailAddress;
    }

    public String getPhoneNumber() {
        return phoneNumber;
    }

    @Override
    public String toString() {
        return getName()+" \n"+getAddress()+" \n"+getPhoneNumber()+" \n"+getEmailAddress()+" \n";
    }
}
