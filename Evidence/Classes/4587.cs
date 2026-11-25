// Namespace: 
public sealed class SandConfig : ScriptableObject // TypeDefIndex: 4587
{
	// Fields
	public Shader Shader; // 0x18
	public ComputeShader Compute; // 0x20
	[Header("Grain")]
	public float ReferenceSpacing; // 0x28
	public float GrainCountMultiplier; // 0x2C
	public float GrainRadius; // 0x30
	public float GrainBrightness; // 0x34
	[Range(0, 1)]
	public float GrainShade; // 0x38
	[Range(0, 0.5)]
	public float GrainToneContrast; // 0x3C
	public float GrainDriftLimit; // 0x40
	[Range(0, 1)]
	public float GrainShear; // 0x44
	[Header("Pile")]
	public float PileHeightScale; // 0x48
	public float PileSettleSpeed; // 0x4C
	public float PileMaxHeight; // 0x50
	public float ReposeSlope; // 0x54
	[Range(0.01, 0.25)]
	public float ReposeTransfer; // 0x58
	[Range(1, 8)]
	public int ReposeIterations; // 0x5C
	public float AlongFlow; // 0x60
	public float AlongFlowLimit; // 0x64
	public float AcrossFlow; // 0x68
	[Header("Corner Swing")]
	public float SwingAmount; // 0x6C
	public float SwingLength; // 0x70
	[Range(0, 1)]
	public float SwingOvershoot; // 0x74
	[Header("Corner Flow")]
	[Range(0, 1)]
	public float CornerEvenness; // 0x78
	public float CornerSmoothing; // 0x7C
	[Range(0.1, 1)]
	public float CornerReach; // 0x80
	[Header("Flow")]
	public float BeltHalfWidth; // 0x84
	public float FlowSpeed; // 0x88
	[Range(1, 2)]
	public float ConveyorSpeedScale; // 0x8C
	[Range(0, 1)]
	public float OverlayLift; // 0x90
	public float ArrangeSpeed; // 0x94
	[Header("Pour")]
	public float PourJumpScale; // 0x98
	[Range(0.1, 1)]
	public float PourDelayScale; // 0x9C
	public float ReformJumpScale; // 0xA0
	[Range(0, 1)]
	public float PourSpeedJitter; // 0xA4
	public float PourArc; // 0xA8
	public float PourSquash; // 0xAC
	public float PourBounce; // 0xB0
	public float PourSlide; // 0xB4
	public float PourScatter; // 0xB8
	[Range(0, 1)]
	public float ReformSpread; // 0xBC
	[Range(0, 1)]
	public float ReformSpeedJitter; // 0xC0
	public float ReformArc; // 0xC4
	public float ReformEaseIn; // 0xC8
	public float ReformScatter; // 0xCC
	public float ReformLead; // 0xD0
	public float ReformCurve; // 0xD4
	public float UndoArc; // 0xD8
	public float PickupLead; // 0xDC
	[Header("Sound")]
	public AudioClip PourSound; // 0xE0
	public AudioClip ReformSound; // 0xE8
	public float PourVolume; // 0xF0
	public float ReformVolume; // 0xF4
	public float SoundFade; // 0xF8
	[Header("Liquid")]
	public Shader LiquidShader; // 0x100
	public Shader LiquidJellyShader; // 0x108
	[Range(0.1, 1)]
	public float LiquidResolution; // 0x110
	[Range(0.1, 1)]
	public float LiquidMaskResolution; // 0x114
	public float LiquidTexelsPerRadius; // 0x118
	public float LiquidBlobScale; // 0x11C
	public float LiquidThreshold; // 0x120
	public float LiquidThickness; // 0x124
	public float LiquidNormalStrength; // 0x128
	public float LiquidGloss; // 0x12C
	public float LiquidSpecular; // 0x130
	public float LiquidJellySize; // 0x134
	[Range(0, 1)]
	public float LiquidGlow; // 0x138
	[Range(0, 1)]
	public float LiquidEdgeDarken; // 0x13C
	public float LiquidGlowWidth; // 0x140
	public float LiquidSaturation; // 0x144
	public float LiquidValue; // 0x148
	public Vector3 LiquidCarrierFill; // 0x14C
	public Vector3 LiquidCarrierOffset; // 0x158
	public float LiquidHiddenReveal; // 0x164
	public float LiquidColorBlend; // 0x168
	public float LiquidCarrierBevel; // 0x16C
	[Range(0, 1)]
	public float LiquidCarrierSide; // 0x170
	public float LiquidCarrierGloss; // 0x174
	public float LiquidCarrierSpecular; // 0x178
	public float LiquidCarrierRim; // 0x17C
	public float LiquidCarrierWobble; // 0x180
	[Range(0, 1)]
	public float LiquidCarrierNeck; // 0x184
	public float LiquidCarrierNeckReach; // 0x188
	public float LiquidAirHeight; // 0x18C
	[Range(0, 1)]
	public float LiquidBeltEdge; // 0x190
	public float LiquidAirBlend; // 0x194
	[Range(0.1, 1)]
	public float LiquidAirSize; // 0x198

	// Methods

	// RVA: 0x24BBC84 Offset: 0x24B7C84 VA: 0x24BBC84
	public void .ctor() { }
}

