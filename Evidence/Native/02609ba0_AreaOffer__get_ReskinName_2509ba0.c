/* IL2CPP: AreaOffer$$get_ReskinName
System_String_o* AreaOffer__get_ReskinName (AreaOffer_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: AreaOffer$$get_ReskinName
   System_String_o* AreaOffer__get_ReskinName (AreaOffer_o* __this, const MethodInfo* method); */

void AreaOffer__get_ReskinName_2509ba0(undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined4 uStack_28;
  
  puVar1 = PTR_DAT_049c39c0;
  if ((bRam0000000004f4bdb8 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c39c0);
    bRam0000000004f4bdb8 = 1;
  }
                    /* try { // try from 02609bd8 to 02709c07 has its CatchHandler @ 02609c50 */
  uStack_28 = AreaOffer__get_Area_25096b8(param_1);
  uStack_38 = *(undefined8 *)puVar1;
  uStack_30 = 0xffffffffffffffff;
  lVar2 = System_Enum__ToString_3135e00(&uStack_38,0);
  if (lVar2 != 0) {
    System_String__ToLowerInvariant_2f81e54(lVar2,0);
                    /* try { // try from 02609c08 to 02709c3f has its CatchHandler @ 02609a44 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

