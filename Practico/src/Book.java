public class Book {
    private int isbn;
    private String name;
    private String author;
    private int nPages;

    ISBNGenerator isbnGenerator = new ISBNGenerator();

    public Book(String name, String author, int nPages){
        this.name = name;
        this.author = author;
        this.nPages = nPages;

        this.isbn = isbnGenerator.ISBNGeneration();

    }

    public Book (String name, String author, int nPages, int isbn){
        this.author = author;
        this.name = name;
        this.nPages = nPages;
        this.isbn = isbn;
    }

    public int getIsbn() {
        return isbn;
    }
    public String getAuthor() {
        return author;
    }
    public String getName() {
        return name;
    }
    public int getnPages() {
        return nPages;
    }

    public void setAuthor(String author) {
        this.author = author;
    }
    public void setName(String name) {
        this.name = name;
    }
    public void setIsbn(int isbn) {
        this.isbn = isbn;
    }
    public void setnPages(int nPages) {
        this.nPages = nPages;
    }


}