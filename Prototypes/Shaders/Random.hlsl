class Random
{
    static unsigned int RandomUInt(int seed) {
        seed ^= seed << 13, seed ^= seed >> 17; seed ^= seed << 5;
        return seed;
    }

    static float RandomFloat(int seed) { return (float)RandomUInt(seed) * 2.3283064365387e-10f; }


    static float RangedRandom(int min, int max, int seed) {
        return (float)(max - min) * RandomFloat(seed) + (float)min;
    }

    static uint RangedRandomUint(uint min, uint max, int seed) {
        return min + RandomUInt(seed) % ((max + 1) - min);
    }

    static float2 RandomVector(int seed) {
        float x = RangedRandom(-1, 1, seed);
        float y = RangedRandom(-1, 1, seed);
        float length = sqrt(x * x + y * y);

        return float2(x/length, y/length);
    }
};