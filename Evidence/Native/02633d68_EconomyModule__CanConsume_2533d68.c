/* IL2CPP: EconomyModule$$CanConsume
bool EconomyModule__CanConsume (EconomyModule_o* __this, EconomyModule_Transaction_o transaction, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: EconomyModule$$CanConsume
   bool EconomyModule__CanConsume (EconomyModule_o* __this, EconomyModule_Transaction_o transaction,
   const MethodInfo* method); */

bool EconomyModule__CanConsume_2533d68(long param_1,long param_2)

{
  int iVar1;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined4 uStack_24;
  
                    /* try { // try from 02633d84 to 02733d8f has its CatchHandler @ 02633ddc */
  if ((bRam0000000004f4bf36 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c9900);
    bRam0000000004f4bf36 = 1;
  }
                    /* try { // try from 02633d9c to 02733dab has its CatchHandler @ 02633dd8 */
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  if (*(long *)(param_1 + 0x50) != 0) {
                    /* try { // try from 02633db0 to 02733db3 has its CatchHandler @ 02633e30 */
                    /* try { // try from 02633db4 to 02733db7 has its CatchHandler @ 02633e2c */
                    /* try { // try from 02633db8 to 02733dbb has its CatchHandler @ 02633e28 */
                    /* try { // try from 02633dbc to 02733dbf has its CatchHandler @ 02633e14 */
    uStack_24 = *(undefined4 *)(param_2 + 0x10);
                    /* try { // try from 02633dc0 to 02733dc3 has its CatchHandler @ 02633e38 */
                    /* try { // try from 02633dc4 to 02733dc7 has its CatchHandler @ 02633e34 */
                    /* try { // try from 02633dc8 to 02733dcb has its CatchHandler @ 02633e00 */
    System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___get_Item_282b400
              (*(long *)(param_1 + 0x50),&uStack_24,&uStack_70,*(undefined8 *)PTR_DAT_049c9900);
                    /* try { // try from 02633dcc to 02733dcf has its CatchHandler @ 02633dfc */
                    /* try { // try from 02633dd0 to 02733dd3 has its CatchHandler @ 02633df8 */
                    /* try { // try from 02633dd4 to 02733dd7 has its CatchHandler @ 02633e20 */
                    /* catch() { ... } // from try @ 02633d9c with catch @ 02633dd8 */
    uStack_48 = uStack_68;
    uStack_50 = uStack_70;
    uStack_38 = uStack_58;
    uStack_40 = uStack_60;
                    /* catch() { ... } // from try @ 02633d84 with catch @ 02633ddc */
    iVar1 = CloudPrefsInt__get_Value_24e99c0(&uStack_50,0);
                    /* catch() { ... } // from try @ 02633cd4 with catch @ 02633de0 */
                    /* catch() { ... } // from try @ 02633d4c with catch @ 02633de4 */
                    /* catch() { ... } // from try @ 02633ae4 with catch @ 02633de8 */
                    /* catch() { ... } // from try @ 02633d60 with catch @ 02633dec */
                    /* catch() { ... } // from try @ 02633d1c with catch @ 02633df0 */
                    /* catch() { ... } // from try @ 02633d10 with catch @ 02633df4 */
                    /* catch() { ... } // from try @ 02633dd0 with catch @ 02633df8 */
    return *(int *)(param_2 + 0x24) <= iVar1;
  }
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 02633dcc with catch @ 02633dfc */
  FUN_021f06a0();
}

