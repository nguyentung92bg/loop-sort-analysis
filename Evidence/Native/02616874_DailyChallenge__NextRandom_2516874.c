/* IL2CPP: DailyChallenge$$NextRandom
uint64_t DailyChallenge__NextRandom (uint64_t* state, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: DailyChallenge$$NextRandom
   uint64_t DailyChallenge__NextRandom (uint64_t* state, const MethodInfo* method); */

ulong DailyChallenge__NextRandom_2516874(ulong *param_1)

{
  ulong uVar1;
  
                    /* catch() { ... } // from try @ 02615d04 with catch @ 02616874 */
                    /* catch() { ... } // from try @ 02615cec with catch @ 02616878 */
                    /* catch() { ... } // from try @ 02615efc with catch @ 0261687c */
                    /* catch() { ... } // from try @ 02615c28 with catch @ 02616880 */
                    /* catch() { ... } // from try @ 02615b7c with catch @ 02616884 */
                    /* catch() { ... } // from try @ 026159c8 with catch @ 02616888 */
                    /* catch() { ... } // from try @ 026158f4 with catch @ 0261688c */
                    /* catch() { ... } // from try @ 026158cc with catch @ 02616890 */
                    /* catch() { ... } // from try @ 02616378 with catch @ 02616894 */
                    /* catch() { ... } // from try @ 02616360 with catch @ 02616898 */
                    /* catch() { ... } // from try @ 026166bc with catch @ 0261689c */
  uVar1 = *param_1 + 0x9e3779b97f4a7c15;
                    /* catch() { ... } // from try @ 026166a4 with catch @ 026168a0 */
                    /* catch() { ... } // from try @ 02615f04 with catch @ 026168a4 */
  *param_1 = uVar1;
                    /* catch() { ... } // from try @ 02615edc with catch @ 026168a8 */
  uVar1 = (uVar1 ^ uVar1 >> 0x1e) * -0x40a7b892e31b1a47;
                    /* catch() { ... } // from try @ 02615ecc with catch @ 026168ac */
                    /* catch() { ... } // from try @ 02615e70 with catch @ 026168b0 */
                    /* catch() { ... } // from try @ 02616860 with catch @ 026168b4 */
                    /* catch() { ... } // from try @ 02615e5c with catch @ 026168b8 */
                    /* catch() { ... } // from try @ 02616858 with catch @ 026168bc */
                    /* catch() { ... } // from try @ 02615e34 with catch @ 026168c0 */
  uVar1 = (uVar1 ^ uVar1 >> 0x1b) * -0x6b2fb644ecceee15;
                    /* catch() { ... } // from try @ 02616854 with catch @ 026168c4 */
                    /* catch() { ... } // from try @ 02616850 with catch @ 026168c8 */
  return uVar1 ^ uVar1 >> 0x1f;
}

