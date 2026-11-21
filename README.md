# CS Study Blog

一个用来记录学习过程的中文个人博客。网站使用 Astro 生成静态页面，文章以 Markdown 文件保存；不需要数据库，也不需要先学习复杂的后台系统。

## 在自己的电脑上预览

先安装 [Node.js](https://nodejs.org/) 的长期支持（LTS）版本。安装时使用默认选项即可。

1. 在电脑上打开终端（Windows 可以打开 PowerShell），进入这个项目文件夹。
2. 第一次运行时输入 `npm install`，等待依赖安装完成。
3. 输入 `npm run dev`。
4. 在浏览器打开终端显示的网址，通常是 `http://localhost:4321/`。修改文件并保存后，页面会自动更新。
5. 预览结束后，在终端按 `Ctrl+C` 停止本地网站。

## 添加或编辑文章

文章都放在 `src/content/posts/` 文件夹里，每篇文章是一个以 `.md` 结尾的 Markdown 文件。可以复制现有示例文章，再修改标题、日期、标签和正文。

文章开头的 `---` 之间是文章信息，正文从第二个 `---` 后开始：

```markdown
---
title: "我的学习记录"
description: "这篇文章主要记录了什么"
pubDate: 2026-11-21
tags: ["学习笔记"]
---

这里开始写正文。用 `## 标题` 添加小标题，用 `- 内容` 添加列表。
```

保存后，文章会出现在首页和文章列表中，并拥有自己的详情页面。示例文章在标题旁标有“示例”，可以保留、改写或删除。文件名会成为文章网址的一部分；建议使用简短的英文或数字文件名，例如 `my-study-notes.md`。

## 每日学习打卡

打开网站导航中的“打卡”，选择日期、学习时段并填写学习时长（小时），即可签到。日历会用颜色显示每天的学习记录；页面还会汇总连续打卡天数、累计时长和各时段分布。点击日历上的日期可以补记或修改该天的记录。

打卡数据只保存在当前浏览器的本地存储中，不会上传或跨设备同步。清理浏览器网站数据、换浏览器或换设备时，记录不会自动带过去。

## 发布到 GitHub Pages

网站已经配置好自动构建和发布。将改动推送到 GitHub 仓库的 `main` 分支后，GitHub Actions 会自动构建网站并发布到 GitHub Pages。

首次发布时，需要在 GitHub 仓库里开启 Pages：

1. 打开仓库的 **Settings**。
2. 在左侧找到 **Pages**。
3. 在 **Build and deployment** 的 **Source** 中选择 **GitHub Actions**。
4. 等待仓库 **Actions** 页面中的部署任务完成，然后通过 **Settings → Pages** 显示的网址访问网站。

GitHub Pages 的部署地址使用仓库名作为路径。本项目已按 `cs-study-blog` 配置；如果仓库改名，也需要同步修改 `astro.config.mjs` 中的 `base`。

## 常见改动入口

- 首页文字和欢迎区：`src/pages/index.astro`
- 关于页面：`src/pages/about.astro`
- 文章：`src/content/posts/` 中的 Markdown 文件
- 网站名称和导航：`src/components/SiteHeader.astro` 与 `src/layouts/BaseLayout.astro`
- 颜色、间距和手机布局：`src/styles/global.css`
- GitHub Pages 路径：`astro.config.mjs`

## 常用命令

```sh
npm run dev      # 本地预览
npm run build    # 构建发布版本
npm run preview  # 预览构建结果
```
