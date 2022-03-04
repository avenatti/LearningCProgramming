// struct Grade {

//     char letter;
//     int rank;
// };

// preffered
typedef struct Grade {
    char letter;
    int rank;
} Grade;


// structure init and member access
Grade student_grade;
// student_grade.letter = 'B';
// student_grade.rank = 86;

Grade student_grade = {'A', 93}; // order of inputs important obviously

Grade student_grade = {.rank = 93, .letter ='A'}; // or designated init

// structure memory layout - padding
// -letter 1 byte
// -padding 3 bytes
// -rank 4 bytes
// Grade = 8 bytes

// head->data == (*head).data // preffered use the arrow operator
// head->data = &my_int; vs (*head).data = &my_int;
