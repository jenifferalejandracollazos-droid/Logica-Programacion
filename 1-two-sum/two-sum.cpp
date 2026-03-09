class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // Mapa para guardar: {valor del número : su índice}
        unordered_map<int, int> mapa;
        
        for (int i = 0; i < nums.size(); i++) {
            int complemento = target - nums[i];
            
            // Si el complemento ya existe en el mapa, encontramos la solución
            if (mapa.find(complemento) != mapa.end()) {
                return {mapa[complemento], i};
            }
            
            // Si no existe, guardamos el número actual con su índice
            mapa[nums[i]] = i;
        }
        
        // El problema garantiza que siempre hay una solución
        return {};
    }
};