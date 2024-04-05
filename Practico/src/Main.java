public class Main {
    static Library library = new Library();
    public static void main(String[] args){

        Book book1 = new Book( "ella y yo","Disney", 50);
        Book book2 = new Book("Peter Pan", "Disney", 34, 1);
        Book book3 = new Book("Robin Hood", "Disney", 60);

        library.AddBooK(book1);
        library.AddBooK(book2);
        library.AddBooK(book3);

        library.ShowBooks();

    }
}