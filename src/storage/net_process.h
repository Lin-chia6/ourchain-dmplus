#ifndef C_STORAGE_MESSAGE
#define C_STORAGE_MESSAGE

#include <uint256.h>
#include <serialize.h>

class CStorageMessage {
  public:
    uint256 hash;
    std::string CID;
    std::string TagCID;
    std::string firstChallengeCID;
    
    ADD_SERIALIZE_METHODS;

    template <typename Stream, typename Operation>
    inline void SerializationOp(Stream& s, Operation ser_action) {
        READWRITE(hash);
        READWRITE(CID);
        READWRITE(TagCID);
        READWRITE(firstChallengeCID);
    }
};

#endif