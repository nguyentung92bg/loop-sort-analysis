/* IL2CPP: MetalBlockSystem$$.cctor
void MetalBlockSystem___cctor (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: MetalBlockSystem$$.cctor
   void MetalBlockSystem___cctor (const MethodInfo* method); */

void MetalBlockSystem___cctor_23ef2e0(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  
  puVar2 = PTR_DAT_049c2040;
  puVar1 = PTR_DAT_049c1f68;
  if ((bRam0000000004f4b63c & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c1f68);
    FUN_021f03f8(PTR_DAT_049c2040);
    bRam0000000004f4b63c = 1;
  }
  uVar3 = UnityEngine_Shader__PropertyToID_3be0c1c(*(undefined8 *)puVar2,0);
                    /* try { // try from 024ef33c to 025ef477 has its CatchHandler @ 024ef33c
                       catch() { ... } // from try @ 024ef33c with catch @ 024ef33c
                       catch() { ... } // from try @ 024ef63c with catch @ 024ef33c
                       catch() { ... } // from try @ 024ef760 with catch @ 024ef33c
                       catch() { ... } // from try @ 024efbd8 with catch @ 024ef33c
                       catch() { ... } // from try @ 024efca8 with catch @ 024ef33c
                       catch() { ... } // from try @ 024efe98 with catch @ 024ef33c
                       catch() { ... } // from try @ 024eff48 with catch @ 024ef33c
                       catch() { ... } // from try @ 024effe0 with catch @ 024ef33c
                       catch() { ... } // from try @ 024f003c with catch @ 024ef33c
                       catch() { ... } // from try @ 024f0094 with catch @ 024ef33c
                       catch() { ... } // from try @ 024f00e4 with catch @ 024ef33c
                       catch() { ... } // from try @ 024f0110 with catch @ 024ef33c
                       catch() { ... } // from try @ 024f01a0 with catch @ 024ef33c */
  **(undefined4 **)(*(long *)puVar1 + 0xb8) = uVar3;
  return;
}

