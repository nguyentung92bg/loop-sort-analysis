/* IL2CPP: Carrier$$AddRejectedColorType
void Carrier__AddRejectedColorType (Carrier_o* __this, ColorType_o colorType, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Carrier$$AddRejectedColorType
   void Carrier__AddRejectedColorType (Carrier_o* __this, ColorType_o colorType, const MethodInfo*
   method); */

void Carrier__AddRejectedColorType_24087a4(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined1 auStack_38 [16];
  undefined8 uStack_28;
  
  if ((bRam0000000004f4b6cc & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c2888);
    bRam0000000004f4b6cc = 1;
  }
  if (*(long *)(param_1 + 0x138) != 0) {
    lVar1 = *(long *)(param_1 + 0x1f0);
    auStack_38 = UniTimer__CreateFromSeconds_3f0f2f4
                           (*(undefined4 *)(*(long *)(param_1 + 0x138) + 0x18),0);
    if (lVar1 != 0) {
      uStack_28 = param_2;
      System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___set_Item_282b5bc
                (lVar1,&uStack_28,auStack_38,*(undefined8 *)PTR_DAT_049c2888);
                    /* try { // try from 02508818 to 0260881f has its CatchHandler @ 02508c4c */
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

