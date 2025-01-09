# Cache Memory Practice Problems

### Structural Relationships

| Length of Address | Data Capacity of Cache (B) | Block Size (B) | Lines per Set | Number of Sets | tag bits | index bits | block offset bits |
| :--: | :--: | :--: | :--: | :--: | :--: | :--: | :--: |
| 32 | 1024 | 4 | 1 | | | | | 
| 32 | 1024 | 8 | 4 | | | | |
| 32 | 1024 | | 2 | 16 |23 | 4 | |
| 32 | 2048 | | | 128 | 23 | 7 | 2 |

### Cache Evaluation 
. 
Consider a system with 12 bit addresses, a direct mapped cache with 4B blocks, and 4 Sets. All read/write requests are for a single byte. The current contents of the cache are as follows (tags and data are given in hex!):

| Set Index | Tag | Valid | Block |  
| :--: | :--: | :--: | :--: |
| 0 | 0x83 | 1 | FE 97 CC D0 |
| 1 | 0x83 | 0 | -- -- -- -- |
| 2 | 0x00 | 1 | 48 49 4A 4B |
| 3 | 0xFF | 1 | 9A C0 03 FF |

1. Consider a read request for the address 0x834
    * What is the tag, index, and byte offset for this address?
    * Is this a hit or a miss? If it's a hit, what gets read? 
2. Consider a read request for the address 0x3A9.
    * What is the tag, index, and byte offset for this address?
    * Is this a hit or a miss? If it's a hit, what gets read? 
3. A program made a read request that hit the cache and resulted in 0x9A, what address was requested by the program? 
4. What range of addresses will hit on set 2? 

