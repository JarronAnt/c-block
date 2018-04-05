#include <ctime>
#include <vector>
#include <string>

using namespace std;

//Transaction
struct Transaction{
    //basic transaction data 
    double amount;
    string senderKey;
    string revieverKey;
    time_t timestamp; 
};

//Block
class Block{
    private:
        //index
        int index;
        //all the hash values 
        size_t hash;
        size_t prevHash;
        size_t genHash;

    public:
        //constructor 
        Block(int index, Transaction transaction, size_t prevHash); 

        //getters 
        size_t getHash(); 
        size_t getPrevHash(); 

        //transaction data member 
        Transaction data; 

        //validate hash

        bool isValid();
};

//blockchain
class Blockchain{
    private:
        Block createGenBlock();

    public:
        vector<Block> chain;
};  