/* IL2CPP: Carrier$$OnReturn
void Carrier__OnReturn (Carrier_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Carrier$$OnReturn
   void Carrier__OnReturn (Carrier_o* __this, const MethodInfo* method); */

void Carrier__OnReturn_24084d4(long param_1)

{
  int iVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  
  if ((bRam0000000004f4b6c7 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c2860);
    FUN_021f03f8(PTR_DAT_049c2868);
    FUN_021f03f8(PTR_DAT_049c2870);
    FUN_021f03f8(PTR_DAT_049c2878);
    FUN_021f03f8(PTR_DAT_049c1398);
    FUN_021f03f8(PTR_DAT_049c1df0);
    bRam0000000004f4b6c7 = 1;
  }
  GameBehaviourBase__OnReturn_24f6ea8(param_1,0);
  lVar5 = *(long *)(param_1 + 0x1e0);
  if (lVar5 != 0) {
    lVar4 = *(long *)PTR_DAT_049c1df0;
    *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
    uVar3 = FUN_021f1190(*(undefined8 *)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 200));
    if ((uVar3 & 1) == 0) {
      *(undefined4 *)(lVar5 + 0x18) = 0;
    }
    else {
      iVar1 = *(int *)(lVar5 + 0x18);
      *(undefined4 *)(lVar5 + 0x18) = 0;
      if (0 < iVar1) {
        System_Array__Clear_31229cc(*(undefined8 *)(lVar5 + 0x10),0,iVar1,0);
      }
    }
    if (*(long *)(param_1 + 0x1e8) != 0) {
      System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Clear_282c0fc
                (*(long *)(param_1 + 0x1e8),*(undefined8 *)PTR_DAT_049c2860);
      if (*(long *)(param_1 + 0x1f8) != 0) {
        System_Collections_Generic_HashSet___Il2CppFullySharedGenericType___Clear_28a2210
                  (*(long *)(param_1 + 0x1f8),*(undefined8 *)PTR_DAT_049c2870);
        if (*(long *)(param_1 + 0x1f0) != 0) {
          System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Clear_282c0fc
                    (*(long *)(param_1 + 0x1f0),*(undefined8 *)PTR_DAT_049c2868);
          *(undefined2 *)(param_1 + 0x1b0) = 0;
          *(undefined1 *)(param_1 + 0x1b2) = 0;
          if (*(long *)(param_1 + 0x208) != 0) {
            System_Collections_Generic_HashSet___Il2CppFullySharedGenericType___Clear_28a2210
                      (*(long *)(param_1 + 0x208),*(undefined8 *)PTR_DAT_049c2878);
            *(undefined2 *)(param_1 + 0x1b3) = 0;
            puVar2 = PTR_DAT_049c1398;
            if (*(long *)(param_1 + 0x210) != 0) {
              System_Collections_Generic_HashSet___Il2CppFullySharedGenericType___Clear_28a2210
                        (*(long *)(param_1 + 0x210),*(undefined8 *)PTR_DAT_049c1398);
              if (*(long *)(param_1 + 0x218) != 0) {
                System_Collections_Generic_HashSet___Il2CppFullySharedGenericType___Clear_28a2210
                          (*(long *)(param_1 + 0x218),*(undefined8 *)puVar2);
                    /* try { // try from 0250863c to 02608817 has its CatchHandler @ 0250863c
                       catch() { ... } // from try @ 0250863c with catch @ 0250863c
                       catch() { ... } // from try @ 02508884 with catch @ 0250863c
                       catch() { ... } // from try @ 02508a30 with catch @ 0250863c
                       catch() { ... } // from try @ 02508af4 with catch @ 0250863c
                       catch() { ... } // from try @ 02508b68 with catch @ 0250863c
                       catch() { ... } // from try @ 02508bdc with catch @ 0250863c
                       catch() { ... } // from try @ 02508be4 with catch @ 0250863c
                       catch() { ... } // from try @ 02508c78 with catch @ 0250863c
                       catch() { ... } // from try @ 02508ca0 with catch @ 0250863c
                       catch() { ... } // from try @ 02508cc4 with catch @ 0250863c
                       catch() { ... } // from try @ 02508cf0 with catch @ 0250863c */
                *(undefined8 *)(param_1 + 0x1c0) = 0;
                *(undefined8 *)(param_1 + 0x1c8) = 0;
                *(undefined8 *)(param_1 + 0x1b8) = 0;
                *(undefined2 *)(param_1 + 0x1b5) = 0;
                return;
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

