/* IL2CPP: PlayerProfile$$.cctor
void PlayerProfile___cctor (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: PlayerProfile$$.cctor
   void PlayerProfile___cctor (const MethodInfo* method); */

void PlayerProfile___cctor_25532a8(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puVar3 = PTR_DAT_049caea8;
  puVar2 = PTR_DAT_049c5a98;
  puVar1 = PTR_DAT_049c49a0;
                    /* try { // try from 026532c4 to 027532cf has its CatchHandler @ 02653368 */
  if ((bRam0000000004f4c08b & 1) == 0) {
                    /* try { // try from 026532dc to 027532eb has its CatchHandler @ 02653360 */
    FUN_021f03f8(PTR_DAT_049c49a0);
    FUN_021f03f8(PTR_DAT_049c5a98);
    FUN_021f03f8(PTR_DAT_049caea8);
                    /* try { // try from 02653300 to 0275330b has its CatchHandler @ 02653394 */
    bRam0000000004f4c08b = 1;
  }
  uStack_40 = *(undefined8 *)puVar3;
  uStack_38 = 0;
                    /* try { // try from 0265331c to 02753327 has its CatchHandler @ 02653364 */
  thunk_FUN_021f190c(&uStack_40);
  uStack_38 = *(undefined8 *)puVar2;
  thunk_FUN_021f190c(&uStack_38);
                    /* try { // try from 02653334 to 02753343 has its CatchHandler @ 0265335c */
  puVar4 = *(undefined8 **)(*(long *)puVar1 + 0xb8);
  puVar4[2] = uStack_38;
                    /* try { // try from 02653348 to 0275334b has its CatchHandler @ 026533b8 */
  puVar4[1] = uStack_40;
  *puVar4 = 0;
                    /* try { // try from 0265334c to 0275334f has its CatchHandler @ 026533c0 */
                    /* try { // try from 02653350 to 02753353 has its CatchHandler @ 026533bc */
                    /* try { // try from 02653354 to 02753357 has its CatchHandler @ 026533ac */
                    /* try { // try from 02653358 to 0275335b has its CatchHandler @ 026533a0 */
  thunk_FUN_021f190c(*(long *)(*(long *)puVar1 + 0xb8) + 8,0);
                    /* catch() { ... } // from try @ 02653334 with catch @ 0265335c
                       try { // try from 0265335c to 027533df has its CatchHandler @ 02652c68 */
                    /* catch() { ... } // from try @ 026532dc with catch @ 02653360 */
                    /* catch() { ... } // from try @ 0265331c with catch @ 02653364 */
                    /* catch() { ... } // from try @ 026532c4 with catch @ 02653368 */
                    /* catch() { ... } // from try @ 026531d4 with catch @ 0265336c */
  return;
}

