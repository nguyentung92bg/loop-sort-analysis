/* IL2CPP: PurchaseButton$$Awake
void PurchaseButton__Awake (PurchaseButton_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: PurchaseButton$$Awake
   void PurchaseButton__Awake (PurchaseButton_o* __this, const MethodInfo* method); */

void PurchaseButton__Awake_2549258(void)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uStack_18;
  
  puVar1 = PTR_DAT_049ca890;
                    /* try { // try from 02649264 to 02749273 has its CatchHandler @ 026493d0 */
  if ((bRam0000000004f4c023 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049ca898);
                    /* try { // try from 02649284 to 0274928b has its CatchHandler @ 026493cc */
    FUN_021f03f8(PTR_DAT_049b5f80);
                    /* try { // try from 0264928c to 027492d3 has its CatchHandler @ 02648ef8 */
    FUN_021f03f8(PTR_DAT_049b5228);
    FUN_021f03f8(PTR_DAT_049ca890);
    bRam0000000004f4c023 = 1;
  }
  if (**(long **)(*(long *)puVar1 + 0xb8) == 0) {
    if (*(int *)(*(long *)PTR_DAT_049b5228 + 0xe4) == 0) {
      FUN_021f0574();
    }
                    /* try { // try from 026492d4 to 027492db has its CatchHandler @ 026493a4 */
    lVar2 = LifetimeScopeH__FindScope_object__2654424(*(undefined8 *)PTR_DAT_049b5f80);
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
                    /* try { // try from 026492ec to 027492f3 has its CatchHandler @ 0264939c */
    FUN_0235c744(*(undefined8 *)(lVar2 + 0x50),&uStack_18,*(undefined8 *)PTR_DAT_049ca898);
                    /* try { // try from 02649304 to 02749337 has its CatchHandler @ 026493bc */
    **(undefined8 **)(*(long *)puVar1 + 0xb8) = uStack_18;
    thunk_FUN_021f190c(*(undefined8 *)(*(long *)puVar1 + 0xb8));
  }
  return;
}

