
import java.util.ArrayList;
import java.util.List;

public class Library {

    private List<Book> books;


    public Library(){
        this.books = new ArrayList<>();
    }

    public void AddBooK(Book book){
        books.add(book);
    }

    public void ShowBooks(){
        for (Book book: books){
            System.out.println(book.getName());
            System.out.println(book.getAuthor());
            System.out.println(book.getIsbn());
            System.out.println(book.getnPages());
        }
    }
}