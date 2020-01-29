/*Create the OverdraftException Class
1.Create a public class, called OverdraftException, in the banking.domain package.
  This class extends the Exception class.
2.Add a private attribute called deficit that holds a double.
  Add a public accessor called getDeficit.
3.Add a public constructor that takes two arguments: message and deficit.
  The message parameter should be passed to the super class constructor.
  The deficit parameter initializes the deficit attribute.
*/
package domain;

public class OverdraftException extends Exception{
    private double deficit;

    public OverdraftException(String message,double deficit){
        super(message);
        this.deficit=deficit;
    }
    public double getDeficit(){
        return deficit;
    }
}
