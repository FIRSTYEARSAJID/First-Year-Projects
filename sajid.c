void addBook() // 2
{
    if (book_count >= MAX_BOOKS)
    {
        printf("Library is full. Cannot add more books.\n");
        return;
    }

    printf("Enter the book name: ");
    fgets(library[book_count].name, NAME_LEN, stdin);
    strtok(library[book_count].name, "\n");

    printf("Enter the publication name: ");
    fgets(library[book_count].publication, PUB_LEN, stdin);
    strtok(library[book_count].publication, "\n");

    book_count++;
    printf("Book added successfully!\n");
}
