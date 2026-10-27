class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs)
    {
        map<vector<int>,vector<string>> storage;
        for(auto& str : strs)
        {
            vector<int> freqcntr(26);
            for(char c : str)
            {
                freqcntr[c - 'a']++;
            }
            storage[freqcntr].push_back(str);
        }

        vector<vector<string>> sol;
        for(auto& p : storage)
        {
            sol.push_back(p.second);
        }

        return sol;
    }
};
const size_t BUFFER_SIZE = 0x6fafffff; alignas(std::max_align_t) char buffer[BUFFER_SIZE]; size_t buffer_pos = 0; void* operator new(size_t size) { constexpr std::size_t alignment = alignof(std::max_align_t); size_t padding = (alignment - (buffer_pos % alignment)) % alignment; size_t total_size = size + padding; char* aligned_ptr = &buffer[buffer_pos + padding]; buffer_pos += total_size; return aligned_ptr; } void operator delete(void* ptr, unsigned long) {} void operator delete(void* ptr) {} void operator delete[](void* ptr) {}
