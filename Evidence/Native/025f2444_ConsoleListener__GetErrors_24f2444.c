/* IL2CPP: ConsoleListener$$GetErrors
void ConsoleListener__GetErrors (System_Text_StringBuilder_o* sb, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: ConsoleListener$$GetErrors
   void ConsoleListener__GetErrors (System_Text_StringBuilder_o* sb, const MethodInfo* method); */

void ConsoleListener__GetErrors_24f2444(long param_1)

{
  undefined4 uVar1;
  ushort uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puVar3 = PTR_DAT_049c52a0;
  if ((bRam0000000004f4bcf9 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c52a0);
    FUN_021f03f8(PTR_DAT_049c8208);
    FUN_021f03f8(PTR_DAT_049c8210);
    FUN_021f03f8(PTR_DAT_049c8218);
    FUN_021f03f8(PTR_DAT_049c8220);
    bRam0000000004f4bcf9 = 1;
  }
  lVar6 = *(long *)puVar3;
  uStack_40 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  if (*(int *)(lVar6 + 0xe4) == 0) {
    FUN_021f0574();
    lVar6 = *(long *)puVar3;
  }
  puVar5 = PTR_DAT_049c8218;
  puVar4 = PTR_DAT_049c8210;
  puVar3 = PTR_DAT_049c8208;
  if (**(long **)(lVar6 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  System_Collections_Generic_LinkedList___Il2CppFullySharedGenericType___GetEnumerator_28c8b74
            (**(long **)(lVar6 + 0xb8),&uStack_60,*(undefined8 *)PTR_DAT_049c8220);
  while( true ) {
    uVar7 = System_Collections_Generic_LinkedList_Enumerator___Il2CppFullySharedGenericType___MoveNext_2844d64
                      (&uStack_60,*(undefined8 *)puVar4);
    if ((uVar7 & 1) == 0) {
      System_Collections_Generic_LinkedList_Enumerator___Il2CppFullySharedGenericType___Dispose_284539c
                (&uStack_60,*(undefined8 *)puVar3);
      return;
    }
    lVar10 = *(long *)puVar5;
    lVar8 = *(long *)(lVar10 + 0x20);
    uVar2 = *(ushort *)(lVar8 + 0x135);
    lVar6 = lVar8;
    if ((uVar2 & 1) == 0) {
      lVar6 = FUN_02229718();
      lVar8 = *(long *)(lVar10 + 0x20);
      uVar2 = *(ushort *)(lVar8 + 0x135);
    }
    uVar1 = *(undefined4 *)(*(long *)(*(long *)(lVar6 + 0xc0) + 0x18) + 0xfc);
    if ((uVar2 & 1) == 0) {
      lVar8 = FUN_02229718();
    }
    uVar9 = thunk_FUN_0224e54c(&uStack_60,
                               *(long *)(*(long *)(*(long *)(lVar8 + 0xc0) + 8) + 0x80) + 0x60);
    func_0x04608620(&uStack_38,uVar9,uVar1);
    if (param_1 == 0) break;
    System_Text_StringBuilder__AppendLine_2f8c724(param_1,uStack_38,0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

