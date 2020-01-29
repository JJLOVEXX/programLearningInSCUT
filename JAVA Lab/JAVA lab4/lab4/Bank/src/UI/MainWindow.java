package UI;

import domain.Bank;
import domain.Customer;
import javafx.application.Application;
import javafx.collections.FXCollections;
import javafx.collections.ObservableList;
import javafx.event.ActionEvent;
import javafx.fxml.FXMLLoader;
import javafx.scene.Parent;
import javafx.scene.Scene;
import javafx.scene.control.Button;
import javafx.scene.control.ListView;
import javafx.scene.control.TextField;
import javafx.scene.control.cell.ComboBoxListCell;
import javafx.stage.Stage;

import java.io.*;

public class MainWindow extends Application {

    public ListView list;
    public TextField text_1;
    public TextField text_2;
    public Button bt_1;
    public Button bt_2;
    public Button bt_3;
    public Button bt_4;

    ListView<String> listView = new ListView<>();

    ObservableList<String> items = FXCollections.observableArrayList("CustomerList");

    File file = new File("C:/Users/ChenLiJian/Desktop/Bank/customers.dat");

    public static void main(String[] args) {
        launch(args);
    }

    @Override
    public void start(Stage primaryStage) throws Exception {
        try {
            Parent root = FXMLLoader.load(getClass().getResource("ui.fxml"));//修改了
            //BorderPane root = new BorderPane();
            //设置Scene的大小(SceneBuilder中点击AnchorPane右边Layout中会显示大小,不一样的可以)
            Scene scene = new Scene(root, 800, 600);//修改了

            primaryStage.setScene(scene);
            primaryStage.setResizable(false);//设置不能窗口改变大小
            primaryStage.setTitle("Bank");//设置标题
            primaryStage.show();
        } catch (Exception e) {
            e.printStackTrace();
        }
    }

    public void add(ActionEvent actionEvent) {
        String f = text_1.getText();
        String l = text_2.getText();
        Customer customer = new Customer(f, l);
        Bank.getBank().addCustomer(f, l);
        Bank.getBank().writeCustomer(file, customer);
        items.add(Bank.getBank().getCustomer(0).getFirstName());
        listView.setCellFactory(ComboBoxListCell.forListView(items));
    }

    public void delete(ActionEvent actionEvent) {
        String f = text_1.getText();
        String l = text_2.getText();
        try {
            if (Bank.getBank().searchCustomers(f, l)) {
                Bank.getBank().deleteCustomer(f, l);
            }

        } catch (Exception e) {
            e.printStackTrace();
        }
    }

    public String search(ActionEvent actionEvent) {
        String f = text_1.getText();
        String l = text_2.getText();
        if(Bank.getBank().searchCustomers(f,l)){
            return Bank.getBank().getCustomer(Bank.getBank().getIndex()).getFirstName();
        }
        else {
            return "No such Customer.";
        }
    }

    public void sort(ActionEvent actionEvent) {
        Bank.getBank().sortCustomers();
    }
}