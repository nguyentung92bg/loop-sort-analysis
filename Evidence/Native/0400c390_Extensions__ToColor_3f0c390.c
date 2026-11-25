/* IL2CPP: Extensions$$ToColor
UnityEngine_Color_o Extensions__ToColor (System_String_o* strColor, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Extensions$$ToColor
   UnityEngine_Color_o Extensions__ToColor (System_String_o* strColor, const MethodInfo* method); */

undefined4 Extensions__ToColor_3f0c390(long param_1)

{
  long lVar1;
  undefined4 uVar2;
  
  if ((bRam0000000004f5c3cc & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b48d8);
    bRam0000000004f5c3cc = 1;
  }
  if (((param_1 != 0) &&
      (lVar1 = System_String__Substring_2f7f570(param_1,5,*(int *)(param_1 + 0x10) + -6,0),
      lVar1 != 0)) &&
     (lVar1 = System_String__Split_2f81014(lVar1,*(undefined8 *)PTR_DAT_049b48d8,0,0), lVar1 != 0))
  {
    if (*(int *)(lVar1 + 0x18) != 0) {
      uVar2 = System_Single__Parse_3112554(*(undefined8 *)(lVar1 + 0x20),0);
      if ((*(uint *)(lVar1 + 0x18) & 0xfffffffe) != 0) {
        System_Single__Parse_3112554(*(undefined8 *)(lVar1 + 0x28),0);
        if (2 < *(uint *)(lVar1 + 0x18)) {
          System_Single__Parse_3112554(*(undefined8 *)(lVar1 + 0x30),0);
          if ((*(uint *)(lVar1 + 0x18) & 0xfffffffc) != 0) {
            System_Single__Parse_3112554(*(undefined8 *)(lVar1 + 0x38),0);
            return uVar2;
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_021f06a8();
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

